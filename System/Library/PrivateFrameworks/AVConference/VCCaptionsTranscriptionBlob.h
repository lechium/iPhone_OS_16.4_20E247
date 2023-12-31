//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscriptionBlob : PBCodable
{
    NSMutableArray *_segments;	// 8 = 0x8
    unsigned int _updateNumber;	// 16 = 0x10
    unsigned int _utteranceNumber;	// 20 = 0x14
    _Bool _isFinal;	// 24 = 0x18
    _Bool _isLocal;	// 25 = 0x19
    struct {
        unsigned int isFinal:1;
        unsigned int isLocal:1;
    } _has;	// 28 = 0x1c
}

+ (Class)segmentsType;	// IMP=0x0010000000119b69
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011a8ec
- (unsigned long long)hash;	// IMP=0x000000000011a861
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011a77b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011a57e
- (void)copyTo:(id)arg1;	// IMP=0x000000000011a497
- (void)writeTo:(id)arg1;	// IMP=0x000000000011a325
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011a318
- (id)dictionaryRepresentation;	// IMP=0x0000000000119c14
- (id)description;	// IMP=0x0000000000119b7a
- (id)segmentsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000119b4c
- (unsigned long long)segmentsCount;	// IMP=0x0000000000119b2f
- (void)addSegments:(id)arg1;	// IMP=0x0000000000119ae2
- (void)clearSegments;	// IMP=0x0000000000119ac5
@property(nonatomic) _Bool hasIsFinal;
@property(nonatomic) _Bool hasIsLocal;
- (void)dealloc;	// IMP=0x00000000001199d4

@end

