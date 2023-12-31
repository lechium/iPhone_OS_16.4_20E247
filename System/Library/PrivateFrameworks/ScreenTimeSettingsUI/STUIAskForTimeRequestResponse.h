//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface STUIAskForTimeRequestResponse : NSObject
{
    unsigned long long _usageType;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_budgetedIdentifier;	// 24 = 0x18
    NSNumber *_requestingUserDSID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000098c74
@property(retain, nonatomic) NSNumber *requestingUserDSID; // @synthesize requestingUserDSID=_requestingUserDSID;
@property(copy, nonatomic) NSString *budgetedIdentifier; // @synthesize budgetedIdentifier=_budgetedIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long usageType; // @synthesize usageType=_usageType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000098b83
- (id)initWithRequestResponse:(id)arg1;	// IMP=0x0000000000098a1c
- (id)init;	// IMP=0x0000000000098a08

@end

