//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SKProductSubscriptionPeriod : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000049a96
- (id)copyXPCEncoding;	// IMP=0x0010000000049a48
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00100000000499b7
- (id)initWithISO8601String:(id)arg1;	// IMP=0x001000000004973c
- (id)init;	// IMP=0x00100000000496e6
- (void)_setUnit:(unsigned long long)arg1;	// IMP=0x00100000000496d8
- (void)_setNumberOfUnits:(unsigned long long)arg1;	// IMP=0x00100000000496ca
@property(readonly, nonatomic) unsigned long long unit;
@property(readonly, nonatomic) unsigned long long numberOfUnits;

@end

