//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyRequest, PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillPerformRedirection : PBCodable
{
    PDURLSessionProxyRequest *_request;	// 8 = 0x8
    PDURLSessionProxyResponse *_response;	// 16 = 0x10
    PDURLSessionProxyTaskMessage *_task;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006f55e
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006f41e
- (unsigned long long)hash;	// IMP=0x001000000006f3b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006f2b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006f1f5
- (void)copyTo:(id)arg1;	// IMP=0x001000000006f172
- (void)writeTo:(id)arg1;	// IMP=0x001000000006f0f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006eea6
- (id)dictionaryRepresentation;	// IMP=0x001000000006ed85
- (id)description;	// IMP=0x001000000006ecd6
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end
