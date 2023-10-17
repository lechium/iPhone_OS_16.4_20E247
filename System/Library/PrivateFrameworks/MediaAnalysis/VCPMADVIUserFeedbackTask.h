//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVIUserFeedbackRequest, NSString, VCPMADServiceImageAsset;
@protocol MTLDevice, OS_dispatch_queue, VICancellable;

__attribute__((visibility("hidden")))
@interface VCPMADVIUserFeedbackTask : NSObject
{
    MADVIUserFeedbackRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    NSString *_signpostPayload;	// 24 = 0x18
    id <MTLDevice> _preferredMetalDevice;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cancelQueue;	// 40 = 0x28
    struct atomic<bool> _canceled;	// 48 = 0x30
    id <VICancellable> _cancellable;	// 56 = 0x38
}

+ (id)dependencies;	// IMP=0x001000000022ee23
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x001000000022ec3a
- (void).cxx_destruct;	// IMP=0x000000000022fa88
- (int)run;	// IMP=0x000000000022eede
- (void)cancel;	// IMP=0x000000000022ee57
- (_Bool)autoCancellable;	// IMP=0x000000000022ee4f
- (float)resourceRequirement;	// IMP=0x000000000022ee41
- (void)setPreferredMetalDevice:(id)arg1;	// IMP=0x000000000022ee30
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x000000000022eb40

@end
