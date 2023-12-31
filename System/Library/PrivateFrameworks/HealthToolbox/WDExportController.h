//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, UIViewController, WDExportManager;

__attribute__((visibility("hidden")))
@interface WDExportController : NSObject
{
    WDExportManager *_exportManager;	// 8 = 0x8
    unsigned long long _backgroundTask;	// 16 = 0x10
    unsigned long long _exportResult;	// 24 = 0x18
    NSURL *_exportFileURL;	// 32 = 0x20
    _Bool _isExporting;	// 40 = 0x28
    UIViewController *_exportPresentingViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002f200
- (void)_cleanUpExport;	// IMP=0x000000000002f177
- (void)_shareExportFileAndCleanUp;	// IMP=0x000000000002ec6d
- (void)_beginExport;	// IMP=0x000000000002e5f7
- (void)verifyExportWithPresentingViewController:(id)arg1;	// IMP=0x000000000002e2ee
- (_Bool)exportInProgress;	// IMP=0x000000000002e2e5
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000002e263

@end

