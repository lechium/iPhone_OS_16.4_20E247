//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OCCancel, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCMapper : NSObject
{
    OCCancel *mCancel;	// 8 = 0x8
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;	// 16 = 0x10
}

+ (id)mapperForCurrentThread;	// IMP=0x006000000037489e
- (void).cxx_destruct;	// IMP=0x000000000037499e
- (id)temporaryDirectoryPath;	// IMP=0x0000000000374949
- (void)teardown;	// IMP=0x00000000003746a6
- (void)setup;	// IMP=0x00000000003744c9
- (void)quit;	// IMP=0x00000000003744b3
- (_Bool)isCancelled;	// IMP=0x000000000037449d
- (void)cancel;	// IMP=0x0000000000374487
- (id)init;	// IMP=0x0000000000374413

@end

