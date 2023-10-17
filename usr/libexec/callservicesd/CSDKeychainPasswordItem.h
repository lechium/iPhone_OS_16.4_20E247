//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CSDKeychainPasswordItem : NSObject
{
    MISSING_TYPE *service;	// 8 = 0x8
    MISSING_TYPE *accessGroup;	// 24 = 0x18
    MISSING_TYPE *account;	// 40 = 0x28
}

+ (id)serviceName;	// IMP=0x0020000000340ef0
+ (id)accessGroupName;	// IMP=0x0010000000340e90
- (void).cxx_destruct;	// IMP=0x0040000000341de0
- (id)init;	// IMP=0x0010000000341d80
@property(nonatomic, readonly) NSString *description;
- (_Bool)saveData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000341ad0
- (id)readDataAndReturnError:(id *)arg1;	// IMP=0x0010000000341a20
- (_Bool)savePassword:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000341770
- (id)readPasswordAndReturnError:(id *)arg1;	// IMP=0x00100000003412e0
- (id)initWithService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3;	// IMP=0x0010000000341010
@property(nonatomic, copy) NSString *account;

@end
