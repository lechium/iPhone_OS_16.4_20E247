//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPCMessageObject : NSObject
{
}

+ (id)_dictionaryValueFromData:(id)arg1;	// IMP=0x0020000000185ca9
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000185bf7
- (id)initWithCoder:(id)arg1;	// IMP=0x0020000000185ee5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000185e6c
- (id)_dataValue;	// IMP=0x0010000000185bff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000185b6d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000185a7c
- (id)dictionaryValue;	// IMP=0x0010000000185a6f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000185a1e
- (id)init;	// IMP=0x0010000000185a05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
