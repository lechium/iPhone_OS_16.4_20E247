//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLWPFontVerifier : NSObject
{
}

+ (id)missingFontName;	// IMP=0x00200000000d6b9f
+ (id)sharedInstance;	// IMP=0x00100000000d6b4a
- (_Bool)isDownloadableFontName:(id)arg1;	// IMP=0x00400000000d6dd6
- (_Bool)isCoreTextDownloadableFontName:(id)arg1;	// IMP=0x00100000000d6cd6
- (_Bool)isCloudKitDownloadableFontName:(id)arg1;	// IMP=0x00100000000d6cbd
- (_Bool)isFontWithPostscriptNameInstalled:(id)arg1;	// IMP=0x00100000000d6bac

@end
