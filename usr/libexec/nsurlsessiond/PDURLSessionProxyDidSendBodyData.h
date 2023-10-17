//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidSendBodyData : PBCodable
{
    unsigned long long _bytesSent;	// 8 = 0x8
    unsigned long long _totalBytesExpectedToSend;	// 16 = 0x10
    unsigned long long _totalBytesSent;	// 24 = 0x18
    PDURLSessionProxyTaskMessage *_task;	// 32 = 0x20
    struct {
        unsigned int bytesSent:1;
        unsigned int totalBytesExpectedToSend:1;
        unsigned int totalBytesSent:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000051715
@property(nonatomic) unsigned long long totalBytesExpectedToSend; // @synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend;
@property(nonatomic) unsigned long long totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000051605
- (unsigned long long)hash;	// IMP=0x001000000005157c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000051475
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000513a2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000051304
- (void)writeTo:(id)arg1;	// IMP=0x0010000000051254
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000050ed2
- (id)dictionaryRepresentation;	// IMP=0x0010000000050d37
- (id)description;	// IMP=0x0010000000050c88
@property(nonatomic) _Bool hasTotalBytesExpectedToSend;
@property(nonatomic) _Bool hasTotalBytesSent;
@property(nonatomic) _Bool hasBytesSent;
@property(readonly, nonatomic) _Bool hasTask;

@end
