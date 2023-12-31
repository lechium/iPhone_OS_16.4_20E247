//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface PDPassUpdateContext : NSObject
{
    NSString *_passUniqueIdentifier;	// 8 = 0x8
    NSString *_serialNumber;	// 16 = 0x10
    NSString *_authenticationToken;	// 24 = 0x18
    NSString *_lastModifiedTag;	// 32 = 0x20
    NSDate *_lastModifiedDate;	// 40 = 0x28
    long long _lastModifiedSource;	// 48 = 0x30
    NSData *_manifestHash;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000026d2e9
- (void).cxx_destruct;	// IMP=0x000000000026d850
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(nonatomic) long long lastModifiedSource; // @synthesize lastModifiedSource=_lastModifiedSource;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSString *lastModifiedTag; // @synthesize lastModifiedTag=_lastModifiedTag;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000026d4af
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000026d2f1

@end

