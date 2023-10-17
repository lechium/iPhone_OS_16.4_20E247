//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SUAutoInstallOperation, SUDownload, SUInstallPolicy;

@interface DMDSUStatus : NSObject
{
    SUDownload *_download;	// 8 = 0x8
    SUInstallPolicy *_installPolicy;	// 16 = 0x10
    SUAutoInstallOperation *_autoInstallOperation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007f5bf
@property(retain, nonatomic) SUAutoInstallOperation *autoInstallOperation; // @synthesize autoInstallOperation=_autoInstallOperation;
@property(retain, nonatomic) SUInstallPolicy *installPolicy; // @synthesize installPolicy=_installPolicy;
@property(retain, nonatomic) SUDownload *download; // @synthesize download=_download;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) double downloadPercentComplete;
@property(readonly, nonatomic) _Bool isDownloadComplete;
@property(readonly, nonatomic) _Bool isDownloading;
@property(readonly, nonatomic) _Bool isInstalling;

@end
