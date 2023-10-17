//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APMediaServiceRequest, MISSING_TYPE, NSArray, NSString;

@interface APMediaServiceRequester : NSObject
{
    _Bool _hasOdml;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    CDUnknownBlockType _deliveryBlock;	// 24 = 0x18
    APMediaServiceRequest *_mediaServiceRequest;	// 32 = 0x20
    NSString *_contextFingerprint;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
    double _responseTime;	// 56 = 0x38
    NSArray *_receivedContentDataItems;	// 64 = 0x40
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000000ef35d
@property(nonatomic) _Bool hasOdml; // @synthesize hasOdml=_hasOdml;
@property(retain, nonatomic) NSArray *receivedContentDataItems; // @synthesize receivedContentDataItems=_receivedContentDataItems;
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSString *contextFingerprint; // @synthesize contextFingerprint=_contextFingerprint;
@property(retain, nonatomic) APMediaServiceRequest *mediaServiceRequest; // @synthesize mediaServiceRequest=_mediaServiceRequest;
@property(copy, nonatomic) CDUnknownBlockType deliveryBlock; // @synthesize deliveryBlock=_deliveryBlock;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)_loadJourneyStartRelayValuesFromContentData:(id)arg1;	// IMP=0x00100000000ef154
- (void)_handleRankedRepresentations:(id)arg1 params:(id)arg2;	// IMP=0x00100000000eec92
- (void)_handleMediaServiceResponse:(id)arg1 params:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ee7e3
- (id)sendRequest:(id)arg1 params:(id)arg2 mediaServiceSession:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ee380
- (id)init;	// IMP=0x00100000000ee351

@end
