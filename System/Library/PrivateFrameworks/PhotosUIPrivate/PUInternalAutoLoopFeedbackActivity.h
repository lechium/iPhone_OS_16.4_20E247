//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUInternalAutoLoopFeedbackActivity : PXActivity
{
}

+ (long long)activityCategory;	// IMP=0x00100000002320c2
- (void)feedbackAssetUIViewController:(id)arg1 didFinish:(_Bool)arg2;	// IMP=0x00000000002322fc
- (id)activityViewController;	// IMP=0x0000000000232282
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000002321db
- (id)asset;	// IMP=0x0000000000232146
- (id)activityImage;	// IMP=0x00000000002320eb
- (id)activityTitle;	// IMP=0x00000000002320de
- (id)activityType;	// IMP=0x00000000002320ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

