//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject
{
    NSString *_environmentName;	// 8 = 0x8
    NSString *_namedDelegatePort;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018d4aa
@property(readonly, copy, nonatomic) NSString *namedDelegatePort; // @synthesize namedDelegatePort=_namedDelegatePort;
@property(readonly, copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018d354
- (unsigned long long)hash;	// IMP=0x000000000018d2c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018d2bc
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;	// IMP=0x000000000018d203

@end
