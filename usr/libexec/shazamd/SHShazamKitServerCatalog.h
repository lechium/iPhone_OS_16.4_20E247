//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/SHCatalog.h>

@class NSString, SHServerResponseContextBuilder, SHShazamKitServerURLBuilder;

@interface SHShazamKitServerCatalog : SHCatalog
{
    NSString *_installationID;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    long long _clientType;	// 24 = 0x18
    SHShazamKitServerURLBuilder *_URLBuilder;	// 32 = 0x20
    SHServerResponseContextBuilder *_contextBuilder;	// 40 = 0x28
}

+ (_Bool)validateClientIdentifier:(id)arg1;	// IMP=0x00400000000106dc
- (void).cxx_destruct;	// IMP=0x0020000000010775
@property(retain, nonatomic) SHServerResponseContextBuilder *contextBuilder; // @synthesize contextBuilder=_contextBuilder;
@property(retain, nonatomic) SHShazamKitServerURLBuilder *URLBuilder; // @synthesize URLBuilder=_URLBuilder;
@property(readonly, nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy, nonatomic) NSString *installationID; // @synthesize installationID=_installationID;
- (id)_createMatcher;	// IMP=0x00100000000106a6
- (void)loadContext:(CDUnknownBlockType)arg1;	// IMP=0x001000000001061c
- (void)loadConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x001000000001054d
- (id)_initWithConfiguration:(id)arg1 installationID:(id)arg2;	// IMP=0x00100000000104f0
- (id)initWithClientIdentifier:(id)arg1 clientType:(long long)arg2 installationID:(id)arg3;	// IMP=0x0010000000010321

@end

