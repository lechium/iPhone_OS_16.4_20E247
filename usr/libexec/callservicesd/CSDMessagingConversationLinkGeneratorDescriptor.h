//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDConversationLinkGeneratorDescriptor, NSString;

@interface CSDMessagingConversationLinkGeneratorDescriptor : PBCodable
{
    NSString *_generatorID;	// 8 = 0x8
    unsigned int _generatorVersion;	// 16 = 0x10
    struct {
        unsigned int generatorVersion:1;
    } _has;	// 20 = 0x14
}

+ (id)generatorDescriptorWithCSDConversationLinkGeneratorDescriptor:(id)arg1;	// IMP=0x0020000000073b48
- (void).cxx_destruct;	// IMP=0x00100000001448f5
@property(nonatomic) unsigned int generatorVersion; // @synthesize generatorVersion=_generatorVersion;
@property(retain, nonatomic) NSString *generatorID; // @synthesize generatorID=_generatorID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000014485d
- (unsigned long long)hash;	// IMP=0x001000000014480b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000014474a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001446b2
- (void)copyTo:(id)arg1;	// IMP=0x001000000014464f
- (void)writeTo:(id)arg1;	// IMP=0x00100000001445eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001445de
- (id)dictionaryRepresentation;	// IMP=0x001000000014430b
- (id)description;	// IMP=0x001000000014425c
@property(nonatomic) _Bool hasGeneratorVersion;
@property(readonly, nonatomic) _Bool hasGeneratorID;
@property(readonly, nonatomic) CSDConversationLinkGeneratorDescriptor *csdConversationLinkGeneratorDescriptor;

@end

