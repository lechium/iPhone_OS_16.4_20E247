//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSObject, NSString, PUPhotoStreamComposeServiceViewController, PXVideoTrimQueueController, UIViewController;
@protocol PLUserEditableAlbumProtocol, PUAlbumStreamActivityDelegate, PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUAlbumStreamActivity : PXActivity
{
    PUPhotoStreamComposeServiceViewController *_streamComposeViewController;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    UIViewController *_presenterViewController;	// 32 = 0x20
    UIViewController *_activityController;	// 40 = 0x28
    PXVideoTrimQueueController *_trimController;	// 48 = 0x30
    _Bool _isPresentedFromActivityViewController;	// 56 = 0x38
    _Bool _destinationAlbumWasCreated;	// 57 = 0x39
    id <PXActivityItemSourceController> _itemSourceController;	// 64 = 0x40
    NSObject<PLUserEditableAlbumProtocol> *_destinationStreamingAlbum;	// 72 = 0x48
    UIViewController *_referenceViewController;	// 80 = 0x50
    id <PUAlbumStreamActivityDelegate> _albumStreamDelegate;	// 88 = 0x58
}

+ (id)customExportsOutputDirectoryForAsset:(id)arg1;	// IMP=0x00100000000bcff6
+ (id)customExportsOutputDirectoryParent;	// IMP=0x00100000000bcf6e
+ (void)_recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;	// IMP=0x00100000000bcb3d
+ (long long)activityCategory;	// IMP=0x00100000000bcb35
+ (_Bool)canPerformWithAssets:(id)arg1;	// IMP=0x00100000000bc947
- (void).cxx_destruct;	// IMP=0x00000000000bb6cd
@property(nonatomic) __weak id <PUAlbumStreamActivityDelegate> albumStreamDelegate; // @synthesize albumStreamDelegate=_albumStreamDelegate;
@property(nonatomic) __weak UIViewController *referenceViewController; // @synthesize referenceViewController=_referenceViewController;
@property _Bool destinationAlbumWasCreated; // @synthesize destinationAlbumWasCreated=_destinationAlbumWasCreated;
@property(retain, nonatomic) NSObject<PLUserEditableAlbumProtocol> *destinationStreamingAlbum; // @synthesize destinationStreamingAlbum=_destinationStreamingAlbum;
@property(nonatomic, setter=setPresentedFromActivityViewController:) _Bool isPresentedFromActivityViewController; // @synthesize isPresentedFromActivityViewController=_isPresentedFromActivityViewController;
- (void)setItemSourceController:(id)arg1;	// IMP=0x00000000000bb5f8
- (id)itemSourceController;	// IMP=0x00000000000bb5df
- (void)photoStreamComposeServiceDidCancel:(id)arg1;	// IMP=0x00000000000bb5cb
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;	// IMP=0x00000000000bb5c5
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;	// IMP=0x00000000000bb58b
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;	// IMP=0x00000000000bb3dc
- (void)controller:(id)arg1 dismissViewControllerWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bb3ba
- (void)controller:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000000bb392
- (void)_publishAssets:(id)arg1 withSharingInfos:(id)arg2 customExportsInfo:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 toAlbum:(id)arg5 orCreateWithName:(id)arg6 comment:(id)arg7 invitationRecipients:(id)arg8 wantsPublicWebsite:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00000000000bb039
- (void)_prepareToPost:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4 assets:(id)arg5;	// IMP=0x00000000000bac53
- (void)presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000baaed
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000baad5
- (void)_performPresentationOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ba9f6
- (_Bool)_sharedAlbumAllowsAdding:(id)arg1;	// IMP=0x00000000000ba9a1
- (void)_handleDismissWithSuccess:(_Bool)arg1;	// IMP=0x00000000000ba679
- (void)_createStreamsPickerContainerWithExisting:(_Bool)arg1 assets:(id)arg2;	// IMP=0x00000000000ba245
- (id)activityViewController;	// IMP=0x00000000000ba230
- (void)prepareWithAssets:(id)arg1;	// IMP=0x00000000000ba020
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000000b9fb1
- (id)_selectedVideo;	// IMP=0x00000000000b9e04
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000b9d2c
- (id)_activityBundleImageConfiguration;	// IMP=0x00000000000b9c93
- (id)activityImage;	// IMP=0x00000000000b9c73
- (id)_systemImageName;	// IMP=0x00000000000b9c66
- (id)activityTitle;	// IMP=0x00000000000b9c55
- (id)activityType;	// IMP=0x00000000000b9c41
- (id)init;	// IMP=0x00000000000b9c02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

