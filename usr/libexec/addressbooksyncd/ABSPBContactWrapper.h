//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ABSPBContact, ABSPBContainerAttributes, NSData, NSMutableArray, NSString;

@interface ABSPBContactWrapper : PBCodable
{
    double _modDate;	// 8 = 0x8
    NSString *_accountExternalIdentifier;	// 16 = 0x10
    NSData *_archive;	// 24 = 0x18
    ABSPBContainerAttributes *_containerAttributes;	// 32 = 0x20
    NSString *_externalGuid;	// 40 = 0x28
    NSData *_fastEncodingData;	// 48 = 0x30
    NSMutableArray *_groupNames;	// 56 = 0x38
    NSString *_guid;	// 64 = 0x40
    NSData *_imageData;	// 72 = 0x48
    NSString *_imageType;	// 80 = 0x50
    NSString *_linkGuid;	// 88 = 0x58
    NSMutableArray *_linkTos;	// 96 = 0x60
    ABSPBContact *_pb;	// 104 = 0x68
    NSData *_reserved1;	// 112 = 0x70
    NSData *_reserved2;	// 120 = 0x78
    NSData *_reserved3;	// 128 = 0x80
    int _sourceType;	// 136 = 0x88
    NSData *_thumbnail;	// 144 = 0x90
    NSData *_vcardData;	// 152 = 0x98
    _Bool _isMe;	// 160 = 0xa0
    struct {
        unsigned int modDate:1;
        unsigned int sourceType:1;
        unsigned int isMe:1;
    } _has;	// 164 = 0xa4
}

+ (Class)linkToType;	// IMP=0x002000000000eb84
+ (Class)groupNameType;	// IMP=0x001000000000e9e1
- (void).cxx_destruct;	// IMP=0x00200000000115ae
@property(retain, nonatomic) ABSPBContainerAttributes *containerAttributes; // @synthesize containerAttributes=_containerAttributes;
@property(retain, nonatomic) NSString *imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *accountExternalIdentifier; // @synthesize accountExternalIdentifier=_accountExternalIdentifier;
@property(retain, nonatomic) NSString *linkGuid; // @synthesize linkGuid=_linkGuid;
@property(retain, nonatomic) NSMutableArray *linkTos; // @synthesize linkTos=_linkTos;
@property(retain, nonatomic) NSData *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *externalGuid; // @synthesize externalGuid=_externalGuid;
@property(nonatomic) double modDate; // @synthesize modDate=_modDate;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSMutableArray *groupNames; // @synthesize groupNames=_groupNames;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSData *reserved3; // @synthesize reserved3=_reserved3;
@property(retain, nonatomic) NSData *reserved2; // @synthesize reserved2=_reserved2;
- (id);	// IMP=0x00100000000113c0
@property(retain, nonatomic) NSData *reserved1; // @synthesize reserved1=_reserved1;
@property(retain, nonatomic) ABSPBContact *pb; // @synthesize pb=_pb;
@property(retain, nonatomic) NSData *archive; // @synthesize archive=_archive;
@property(retain, nonatomic) NSData *fastEncodingData; // @synthesize fastEncodingData=_fastEncodingData;
@property(retain, nonatomic) NSData *vcardData; // @synthesize vcardData=_vcardData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000010e45
- (unsigned long long)hash;	// IMP=0x0010000000010afc
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001067e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000010094
- (void)copyTo:(id)arg1;	// IMP=0x001000000000fd08
- (void)writeTo:(id)arg1;	// IMP=0x001000000000f8cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000f8c0
- (id)dictionaryRepresentation;	// IMP=0x001000000000ecad
- (id)description;	// IMP=0x001000000000ebfe
@property(readonly, nonatomic) _Bool hasContainerAttributes;
@property(readonly, nonatomic) _Bool hasImageType;
@property(readonly, nonatomic) _Bool hasImageData;
@property(readonly, nonatomic) _Bool hasAccountExternalIdentifier;
@property(readonly, nonatomic) _Bool hasLinkGuid;
- (id)linkToAtIndex:(unsigned long long)arg1;	// IMP=0x001000000000eb67
- (unsigned long long)linkTosCount;	// IMP=0x001000000000eb4a
- (void)addLinkTo:(id)arg1;	// IMP=0x001000000000eae0
- (void)clearLinkTos;	// IMP=0x001000000000eac3
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) _Bool hasExternalGuid;
@property(nonatomic) _Bool hasModDate;
@property(nonatomic) _Bool hasIsMe;
@property(readonly, nonatomic) _Bool hasGuid;
- (id)groupNameAtIndex:(unsigned long long)arg1;	// IMP=0x001000000000e9c4
- (unsigned long long)groupNamesCount;	// IMP=0x001000000000e9a7
- (void)addGroupName:(id)arg1;	// IMP=0x001000000000e93d
- (void)clearGroupNames;	// IMP=0x001000000000e920
@property(nonatomic) _Bool hasSourceType;
@property(readonly, nonatomic) _Bool hasReserved3;
@property(readonly, nonatomic) _Bool hasReserved2;
@property(readonly, nonatomic) _Bool hasReserved1;
@property(readonly, nonatomic) _Bool hasPb;
@property(readonly, nonatomic) _Bool hasArchive;
@property(readonly, nonatomic) _Bool hasFastEncodingData;
@property(readonly, nonatomic) _Bool hasVcardData;

@end
