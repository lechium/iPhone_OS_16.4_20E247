//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyLinkActivity : PXActivity
{
}

+ (long long)activityCategory;	// IMP=0x00100000001201e5
+ (_Bool)wantsMomentShareLinkForAssetCount:(long long)arg1;	// IMP=0x00100000001201db
- (void)performActivity;	// IMP=0x0000000000120314
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000012021f
- (id)_systemImageName;	// IMP=0x0000000000120212
- (id)activityTitle;	// IMP=0x0000000000120201
- (id)activityType;	// IMP=0x00000000001201ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController;
@property(readonly) Class superclass;

@end
