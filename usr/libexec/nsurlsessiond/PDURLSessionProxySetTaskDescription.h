//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySetTaskDescription : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSString *_taskDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000034b58
@property(retain, nonatomic) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000034a91
- (unsigned long long)hash;	// IMP=0x0010000000034a44
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003497c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000348de
- (void)copyTo:(id)arg1;	// IMP=0x001000000003487b
- (void)writeTo:(id)arg1;	// IMP=0x001000000003481e
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003463f
- (id)dictionaryRepresentation;	// IMP=0x001000000003458f
- (id)description;	// IMP=0x00100000000344e0
@property(readonly, nonatomic) _Bool hasTaskDescription;
@property(readonly, nonatomic) _Bool hasTask;

@end
