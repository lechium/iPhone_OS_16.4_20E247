//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface AMSXDProtoMessage : PBCodable
{
    NSString *_logKey;	// 8 = 0x8
    NSData *_messageData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000037d70f
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000037d662
- (unsigned long long)hash;	// IMP=0x000000000037d615
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000037d54d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000037d4af
- (void)copyTo:(id)arg1;	// IMP=0x000000000037d451
- (void)writeTo:(id)arg1;	// IMP=0x000000000037d3d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000037d231
- (id)dictionaryRepresentation;	// IMP=0x000000000037d1ae
- (id)description;	// IMP=0x000000000037d0ff
@property(readonly, nonatomic) _Bool hasLogKey;

@end
