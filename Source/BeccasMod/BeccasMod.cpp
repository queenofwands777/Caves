

#include"BeccasMod.h"
#include "LevelEditor.h"
#include "ToolMenus.h"
#include"Slate.h"



#define LOCTEXT_NAMESPACE "FBeccasMod"

void FBeccasMod::StartupModule()
{
    // Register the toolbar button
    UE_LOG(LogTemp, Warning, TEXT("BeccasMod module has started."));
    AddToolbarButton();
}

void FBeccasMod::ShutdownModule()
{
    // Clean up when the module is unloaded
    
    UToolMenus::UnregisterOwner(this);
}


void FBeccasMod::AddToolbarButton()
{
    FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>(FName("LevelEditor"));

    //// Define the toolbar button
    TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
        
    ToolbarExtender->AddToolBarExtension("ProjectSettings", EExtensionHook::Position::After, nullptr,
    FToolBarExtensionDelegate::CreateLambda([this](FToolBarBuilder& Builder) {

        FUIAction UIAction(
            FExecuteAction::CreateRaw(this, &FBeccasMod::OnButtonClicked)
        );

        Builder.AddToolBarButton(
            UIAction,
            NAME_None,
            LOCTEXT("WeaponButtonLabel", "Create Weapon"),
            LOCTEXT("WeaponButtonTooltip", "Creates a new weapon blueprint"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Save"),
            EUserInterfaceActionType::Button
        );
        })
    );

    //// Add to Level Editor toolbar
    LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
}

void FBeccasMod::OnButtonClicked()
{
    // Call your custom utility function to create the weapon blueprint
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FBeccasMod, BeccasMod)