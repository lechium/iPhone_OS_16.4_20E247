//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_SFActivity.h"

@class NSString, UIViewController, _SFActivityItemCustomizationController, _SFSaveToFilesOperation;

__attribute__((visibility("hidden")))
@interface SFSaveToFilesActivity : _SFActivity
{
    _SFSaveToFilesOperation *_operation;	// 8 = 0x8
    UIViewController *_presenterViewController;	// 16 = 0x10
    CDUnknownBlockType _presentationCompletionHandler;	// 24 = 0x18
    _Bool _presentAnimated;	// 32 = 0x20
    _SFActivityItemCustomizationController *_customizationController;	// 40 = 0x28
    UIViewController *_presentedViewController;	// 48 = 0x30
    _Bool _supportsDownloads;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000a57c4
@property(nonatomic) _Bool supportsDownloads; // @synthesize supportsDownloads=_supportsDownloads;
- (_Bool)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)arg1;	// IMP=0x00000000000a579c
- (id)customizationControllerForSaveToFilesOperation:(id)arg1;	// IMP=0x00000000000a5787
- (_Bool)saveToFilesOperationSupportsDownloads:(id)arg1;	// IMP=0x00000000000a5777
- (void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(_Bool)arg2;	// IMP=0x00000000000a571d
- (void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000000a567e
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a55ce
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a5545
- (_Bool)_managesOwnPresentation;	// IMP=0x00000000000a553d
- (id)activityType;	// IMP=0x00000000000a5529
- (id)initWithActivityItemProviderCollection:(id)arg1 customizationController:(id)arg2;	// IMP=0x00000000000a5445

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
