//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PromotedIAPDatabase;

@interface PromotedIAPManager : NSObject
{
    PromotedIAPDatabase *_database;	// 8 = 0x8
}

+ (id);	// IMP=0x00400000001b4d9c
- (void).cxx_destruct;	// IMP=0x00200000001b5514
- (void)removeOverridesForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b54fe
- (void)getInfoInternalForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b4ecf
- (void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b4eb9
- (void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b4ea3
- (void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b4e8d
- (void)getOrderForIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b4e77
- (id)init;	// IMP=0x00100000001b4e21

@end
