//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListEntryPositionKey : NSObject
{
    NSString *_deviceIdentifier;	// 8 = 0x8
    NSString *_generation;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007736d
+ (id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2;	// IMP=0x00100000000772ca
- (void).cxx_destruct;	// IMP=0x00000000000772a2
@property(copy, nonatomic) NSString *generation; // @synthesize generation=_generation;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077202
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077128
- (long long)compare:(id)arg1;	// IMP=0x0000000000077030

@end

