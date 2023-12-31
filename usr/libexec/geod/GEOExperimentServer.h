//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOExperimentServer : GEOServer
{
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000018032
+ (id)identifier;	// IMP=0x0010000000018025
- (void)fetchAssignUUIDSyncWithMessage:(id)arg1;	// IMP=0x001000000001c9fb
- (void)fetchAssignUUIDWithMessage:(id)arg1;	// IMP=0x001000000001c7bf
- (void)fetchAllExperimentsWithMessage:(id)arg1;	// IMP=0x001000000001c4c1
- (void)setBucketIdWithMessage:(id)arg1;	// IMP=0x001000000001c429
- (void)setActiveBranchWithMessage:(id)arg1;	// IMP=0x001000000001c302
- (void)setQuerySubstringWithMessage:(id)arg1;	// IMP=0x001000000001c11b
- (void)refreshDatasetWithMessage:(id)arg1;	// IMP=0x001000000001c055
- (void)updateWithMessage:(id)arg1;	// IMP=0x001000000001c011
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000001bfa7
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x001000000001803d

@end

