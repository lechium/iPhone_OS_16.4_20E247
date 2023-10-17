//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, _OSLogEventSerializationMetadata;

__attribute__((visibility("hidden")))
@interface OSLogDeserializedEventMessageArgument
{
    NSDictionary *_backingDict;	// 8 = 0x8
    _OSLogEventSerializationMetadata *_metadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000049089
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (long double)longDoubleValue;	// IMP=0x000000000004901d
- (double)doubleValue;	// IMP=0x0000000000048fcd
- (long long)int64Value;	// IMP=0x0000000000048f89
- (unsigned long long)unsignedInt64Value;	// IMP=0x0000000000048f45
- (id)_numValue;	// IMP=0x0000000000048e9f
- (unsigned short)rawBytesLength;	// IMP=0x0000000000048dac
- (const void *)rawBytes;	// IMP=0x0000000000048c88
- (id)objectRepresentation;	// IMP=0x0000000000048a8b
- (unsigned long long)scalarType;	// IMP=0x0000000000048964
- (unsigned long long)scalarCategory;	// IMP=0x000000000004883d
- (unsigned long long)category;	// IMP=0x0000000000048716
- (unsigned long long)privacy;	// IMP=0x00000000000485ef
- (unsigned long long)availability;	// IMP=0x00000000000484c8
- (id)initWithDict:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000048426

@end
