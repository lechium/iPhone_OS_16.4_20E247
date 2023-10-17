//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyError, PDURLSessionProxyTaskMessage, __NSCFURLSessionTaskInfo;

@interface PDURLSessionProxyTaskCompleted : PBCodable
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    NSData *_taskInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x001000000006ec55
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006eb2f
- (unsigned long long)hash;	// IMP=0x001000000006eac2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006e9ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006e906
- (void)copyTo:(id)arg1;	// IMP=0x001000000006e883
- (void)writeTo:(id)arg1;	// IMP=0x001000000006e809
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006e5e3
- (id)dictionaryRepresentation;	// IMP=0x001000000006e4e7
- (id)description;	// IMP=0x001000000006e438
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTask;
@property(retain, setter=_setActualTaskInfo:) __NSCFURLSessionTaskInfo *_actualTaskInfo;

@end
