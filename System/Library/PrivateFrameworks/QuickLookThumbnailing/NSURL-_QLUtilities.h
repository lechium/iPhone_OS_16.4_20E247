//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (_QLUtilities)
+ (id)_QLCreateTemporaryReplacementURLForOriginalFileAtURL:(id)arg1 withExtension:(id)arg2 temporaryDirectoryURL:(id *)arg3;	// IMP=0x006000000002a80b
+ (id)_QLTemporaryURLWithExtension:(id)arg1 openingFileHandle:(int *)arg2 inDirectoryAtURL:(id)arg3;	// IMP=0x006000000002a66f
- (id)ql_realpathURL;	// IMP=0x001000000002aa71
- (id)_QLIssueFileExtensionWithSandboxType:(const char *)arg1;	// IMP=0x001000000002a5c1
- (id)_QLUrlFileSize;	// IMP=0x001000000002a00c
- (id)_QLFileSize;	// IMP=0x0010000000029f51
- (_Bool)_QLNeedsDownload;	// IMP=0x0010000000029dff
- (_Bool)_QLIsDataLess;	// IMP=0x0010000000029c4f
- (_Bool)_QLNeedsCoordination;	// IMP=0x0010000000029bde
@end
