//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveDataReply : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000043e50
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000043dce
- (unsigned long long)hash;	// IMP=0x0010000000043db1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000043d17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000043c9f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000043c75
- (void)writeTo:(id)arg1;	// IMP=0x0010000000043c51
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000043aa9
- (id)dictionaryRepresentation;	// IMP=0x0010000000043a1f
- (id)description;	// IMP=0x0010000000043970
@property(readonly, nonatomic) _Bool hasTask;

@end
