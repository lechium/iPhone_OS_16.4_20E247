//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface LAACL : NSObject
{
    struct __SecAccessControl *_acl;	// 8 = 0x8
    NSDictionary *_constraints;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000e749
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e627
- (void)evaluateInContext:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e600
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSDictionary *constraints;
- (void)dealloc;	// IMP=0x000000000000e523
- (id)initWithData:(id)arg1;	// IMP=0x000000000000e4b3

@end

