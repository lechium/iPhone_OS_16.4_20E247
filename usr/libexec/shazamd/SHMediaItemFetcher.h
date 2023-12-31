//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHAttribution, SHServerResponseContextBuilder, SHShazamKitServerURLBuilder;
@protocol SHNetworkRecognitionRequester;

@interface SHMediaItemFetcher : NSObject
{
    SHShazamKitServerURLBuilder *_URLBuilder;	// 8 = 0x8
    SHServerResponseContextBuilder *_contextBuilder;	// 16 = 0x10
    SHAttribution *_attribution;	// 24 = 0x18
    id <SHNetworkRecognitionRequester> _networkRequester;	// 32 = 0x20
    long long _clientType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000ec59
@property(readonly, nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(readonly, nonatomic) id <SHNetworkRecognitionRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) SHServerResponseContextBuilder *contextBuilder; // @synthesize contextBuilder=_contextBuilder;
@property(readonly, nonatomic) SHShazamKitServerURLBuilder *URLBuilder; // @synthesize URLBuilder=_URLBuilder;
- (void)mediaItemForShazamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e31b
- (id)initWithAttribution:(id)arg1 clientType:(long long)arg2 URLBuilder:(id)arg3 contextBuilder:(id)arg4 networkRequester:(id)arg5;	// IMP=0x001000000000e238
- (id)initWithAttribution:(id)arg1 clientType:(long long)arg2;	// IMP=0x001000000000e14e

@end

