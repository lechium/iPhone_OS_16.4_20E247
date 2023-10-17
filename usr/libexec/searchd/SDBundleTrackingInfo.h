//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SDBundleTrackingInfo : NSObject
{
    NSString *_compositeIdentifier;	// 8 = 0x8
    _Bool _shouldRun;	// 16 = 0x10
    _Bool _isDirty;	// 17 = 0x11
    int _state;	// 20 = 0x14
    _Bool _lastRunWasSuccessful;	// 24 = 0x18
}

+ (id)_trackingInfoDir;	// IMP=0x0040000000037ceb
- (void).cxx_destruct;	// IMP=0x00200000000382ee
- (void)recordEvent:(int)arg1 info:(id)arg2 forBundleWithKey:(id)arg3 inState:(int)arg4;	// IMP=0x00100000000382e8
- (_Bool)shouldContinueIndexingAfterTransitioToState:(int)arg1;	// IMP=0x00100000000381dd
- (_Bool)shouldRunIndexer;	// IMP=0x00100000000381d4
- (void)save;	// IMP=0x00100000000381ba
- (id)initWithCompositeIdentifier:(id)arg1;	// IMP=0x001000000003813f
- (void)_loadFromPlist;	// IMP=0x0010000000037f57
- (void)_saveToPlist;	// IMP=0x0010000000037d5b
- (id)_filename;	// IMP=0x0010000000037cce
- (void)_copyInfoFromDictionary:(id)arg1;	// IMP=0x0010000000037cc8
- (id)_dictionaryRepresentation;	// IMP=0x0010000000037cc0

@end
