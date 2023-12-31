//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PKUISSBannerHandle, PKUISSPresentableContext;

@interface PKUISSBannerPresentableProvider : NSObject
{
    PKUISSBannerHandle *_requestedExpressHandle;	// 8 = 0x8
    NSMutableArray *_standaloneTransactonHandles;	// 16 = 0x10
    PKUISSPresentableContext *_requestedFaceIDContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000005406
- (id)nextRequestForManager:(id)arg1;	// IMP=0x00100000000048bb
- (_Bool)shouldRevokeCurrentRequestForManager:(id)arg1;	// IMP=0x0010000000004831
- (id)init;	// IMP=0x0010000000004823

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

