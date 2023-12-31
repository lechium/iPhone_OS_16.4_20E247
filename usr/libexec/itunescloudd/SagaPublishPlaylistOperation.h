//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SagaPublishPlaylistOperation
{
    unsigned long long _sagaID;	// 8 = 0x8
    NSString *_playlistGlobalID;	// 16 = 0x10
    NSString *_playlistShareURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004330f
@property(readonly, nonatomic) NSString *playlistShareURL; // @synthesize playlistShareURL=_playlistShareURL;
@property(readonly, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
- (void)main;	// IMP=0x0010000000042d2c
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 sagaID:(unsigned long long)arg3;	// IMP=0x0010000000042ce8
- (id)initWithClientIdentity:(id)arg1 sagaID:(unsigned long long)arg2;	// IMP=0x0010000000042c75

@end

