//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIDeviceMediaLibrary.h"

@class VUISidebandMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary
{
    VUIDeviceMediaLibrary *_deviceMediaLibrary;	// 8 = 0x8
    VUISidebandMediaLibrary *_sidebandMediaLibrary;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffectingConnectionState;	// IMP=0x00600000002c8406
- (void).cxx_destruct;	// IMP=0x00000000002c846c
@property(readonly, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary; // @synthesize sidebandMediaLibrary=_sidebandMediaLibrary;
@property(readonly, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary; // @synthesize deviceMediaLibrary=_deviceMediaLibrary;
- (void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000002c8438
- (void)_deviceMediaLibraryContentsDidChange:(id)arg1;	// IMP=0x00000000002c8426
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x00000000002c8366
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x00000000002c82e3
- (id)_imageLoaderIdentifier;	// IMP=0x00000000002c8293
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c819f
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c7641
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c6f1e
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c6e98
- (unsigned long long)connectionState;	// IMP=0x00000000002c6e54
- (id)title;	// IMP=0x00000000002c6e04
- (void)updateFromCloudWithReason:(long long)arg1;	// IMP=0x00000000002c6db8
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c6d46
- (_Bool)isInitialUpdateInProgress;	// IMP=0x00000000002c6cbd
- (_Bool)isUpdating;	// IMP=0x00000000002c6c34
- (void)dealloc;	// IMP=0x00000000002c6bbf
- (id)initWithManager:(id)arg1 deviceMediaLibrary:(id)arg2 sidebandMediaLibrary:(id)arg3;	// IMP=0x00000000002c6a42

@end
