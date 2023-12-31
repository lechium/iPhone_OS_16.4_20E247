//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueDictionary : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

+ (Class)pairType;	// IMP=0x0010000000052fe3
- (void).cxx_destruct;	// IMP=0x0000000000053a71
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000053917
- (unsigned long long)hash;	// IMP=0x00000000000538fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000053860
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005369d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000535de
- (void)writeTo:(id)arg1;	// IMP=0x00000000000534ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000534a1
- (id)dictionaryRepresentation;	// IMP=0x00000000000530a3
- (id)description;	// IMP=0x0000000000052ff4
- (id)pairAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000052fc6
- (unsigned long long)pairsCount;	// IMP=0x0000000000052fa9
- (void)addPair:(id)arg1;	// IMP=0x0000000000052f3f
- (void)clearPairs;	// IMP=0x0000000000052f22
@property(copy, nonatomic) NSDictionary *dictionary;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000051418

@end

