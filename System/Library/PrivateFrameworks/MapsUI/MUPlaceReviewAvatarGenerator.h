//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MUPlaceReviewAvatarGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableDictionary *_cachedMaskedImages;	// 16 = 0x10
    CNAvatarImageRenderer *_monogrammer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e2a07
@property(retain, nonatomic) CNAvatarImageRenderer *monogrammer; // @synthesize monogrammer=_monogrammer;
- (void)avatarForReview:(id)arg1 pointSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e276e
- (void)monogramForReviewerName:(id)arg1 pointSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e2264
- (id)init;	// IMP=0x00000000000e220c

@end
