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

+ (id)_dictionaryValueFromData:(id)arg1;	// IMP=0x002000000000eccc
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000ec1a
- (id)initWithCoder:(id)arg1;	// IMP=0x002000000000ef08
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000ee8f
- (id)_dataValue;	// IMP=0x001000000000ec22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000eb90
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000ea9f
- (id)dictionaryValue;	// IMP=0x001000000000ea92
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000000ea41
- (id)init;	// IMP=0x001000000000ea28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

