//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WKWebProcessPlugInScriptWorld, _SFFormMetadataController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInAutoFillPageController
{
    _WKRemoteObjectInterface *_activityControllerInterface;	// 8 = 0x8
    _WKRemoteObjectInterface *_autoFillerInterface;	// 16 = 0x10
    WKWebProcessPlugInScriptWorld *_isolatedWorld;	// 24 = 0x18
    _SFFormMetadataController *_formMetadataController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000015e2b7
@property(retain, nonatomic) _SFFormMetadataController *formMetadataController; // @synthesize formMetadataController=_formMetadataController;
- (void)setAutoFillSpinnerVisibility:(_Bool)arg1 textFieldMetadata:(id)arg2 frame:(id)arg3;	// IMP=0x000000000015e1b4
- (void)makeAutomaticStrongPasswordElementViewable:(_Bool)arg1 frame:(id)arg2 passwordControlUniqueIDs:(id)arg3;	// IMP=0x000000000015e0d2
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;	// IMP=0x000000000015dff9
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;	// IMP=0x000000000015df20
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3;	// IMP=0x000000000015de22
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000015dcb6
- (void)clearAutoFillMetadata;	// IMP=0x000000000015dc09
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000015da69
- (void)collectFormMetadataForPageLevelAutoFillAtURL:(id)arg1;	// IMP=0x000000000015d982
- (void)collectFormMetadataForPrefillingAtURL:(id)arg1;	// IMP=0x000000000015d89b
- (void)collectURLsForPrefillingAtURL:(id)arg1;	// IMP=0x000000000015d7b4
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;	// IMP=0x000000000015d68b
- (void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(id)arg2;	// IMP=0x000000000015d5c4
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 shouldSubmit:(_Bool)arg3;	// IMP=0x000000000015d4e0
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;	// IMP=0x000000000015d3e5
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;	// IMP=0x000000000015d2e6
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;	// IMP=0x000000000015d1f2
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;	// IMP=0x000000000015d119
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 fieldsToObscure:(id)arg6 submitForm:(_Bool)arg7;	// IMP=0x000000000015cfdc
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 submitForm:(_Bool)arg6;	// IMP=0x000000000015cfb7
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5;	// IMP=0x000000000015cf9b
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 selectFieldAfterFilling:(id)arg4;	// IMP=0x000000000015cf78
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;	// IMP=0x000000000015cef7
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;	// IMP=0x000000000015ce99
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x000000000015ce3b
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x000000000015ce1b
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000015cb53
- (void)willDestroyBrowserContextController:(id)arg1;	// IMP=0x000000000015ca26
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;	// IMP=0x000000000015c89b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

