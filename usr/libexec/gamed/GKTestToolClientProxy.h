//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameInternal;

@interface GKTestToolClientProxy
{
    GKGameInternal *_testGame;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001aa152
@property(retain, nonatomic) GKGameInternal *testGame; // @synthesize testGame=_testGame;
- (id)externalVersion;	// IMP=0x00100000001aa0ae
- (id)adamID;	// IMP=0x00100000001aa02f
- (id)bundleShortVersion;	// IMP=0x00100000001a9fb0
- (id)bundleVersion;	// IMP=0x00100000001a9f31
- (id)bundleIdentifier;	// IMP=0x00100000001a9eb2
- (id)transportWithCredential:(id)arg1;	// IMP=0x00100000001a9dd7
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a9981

@end
