//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CADDiagnosticsDatabaseCollector : NSObject
{
    NSURL *_outputURL;	// 8 = 0x8
    NSArray *_auxDBInfo;	// 16 = 0x10
    struct CalDatabase *_database;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000540ef
- (void)collectDatabase:(struct CalDatabase *)arg1 auxDatabase:(void *)arg2 outputURL:(id)arg3 context:(id)arg4;	// IMP=0x0000000000053d6b
- (void)collect:(id)arg1;	// IMP=0x0000000000053afc
- (void)determineExpectedOutputFiles:(id)arg1;	// IMP=0x0000000000053741
- (struct CalDatabase *)database;	// IMP=0x000000000005371a
- (void)dealloc;	// IMP=0x00000000000536d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
