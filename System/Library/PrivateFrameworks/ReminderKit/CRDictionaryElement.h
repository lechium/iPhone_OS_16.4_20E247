//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRVectorTimestamp;
@protocol CRDataType;

__attribute__((visibility("hidden")))
@interface CRDictionaryElement : NSObject
{
    id <CRDataType> _value;	// 8 = 0x8
    CRVectorTimestamp *_timestamp;	// 16 = 0x10
}

+ (id)temporaryElementWithValue:(id)arg1;	// IMP=0x00600000000dfc48
- (void).cxx_destruct;	// IMP=0x00000000000e01c8
@property(retain, nonatomic) CRVectorTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) id <CRDataType> value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000000e0062
- (void)mergeWith:(id)arg1;	// IMP=0x00000000000dff47
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dfe64
- (unsigned long long)hash;	// IMP=0x00000000000dfe0c
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;	// IMP=0x00000000000dfd55
- (id)initWithValue:(id)arg1;	// IMP=0x00000000000dfca8

@end
