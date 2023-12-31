//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary;

@interface SPApplicationMetadataUpdater : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSMutableDictionary *_lookupDict;	// 16 = 0x10
}

+ (id)metadataTokenPath;	// IMP=0x0040000000013589
+ (id)metadataFilePath;	// IMP=0x001000000001353b
+ (id)metadataFilePathOld;	// IMP=0x00100000000134ed
+ (id)sharedInstance;	// IMP=0x0010000000013498
- (void).cxx_destruct;	// IMP=0x0020000000015f0f
@property(retain, nonatomic) NSMutableDictionary *lookupDict; // @synthesize lookupDict=_lookupDict;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)computeAppLaunchesFromTime:(double)arg1 toTime:(double)arg2 yesterday:(double)arg3;	// IMP=0x001000000001566b
- (void)updateMetadata:(struct _app_metadata *)arg1 lastUpdatedTime:(double)arg2 nowTime:(double)arg3;	// IMP=0x0010000000015559
- (_Bool)incrementDataValues:(double *)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3 byProportion:(double)arg4;	// IMP=0x00100000000154ea
- (void)updateApplicationMetadataWithFilePath:(id)arg1 currentDate:(id)arg2 legacyPath:(id)arg3;	// IMP=0x001000000001491f
- (id)appMetadata;	// IMP=0x001000000001446b
- (_Bool)migrateDataIfNecessaryFromOlderFormatFile:(id)arg1 newFormatFile:(id)arg2;	// IMP=0x0010000000013db9
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013c63
- (void)update;	// IMP=0x00100000000139d6
- (id)init;	// IMP=0x00100000000135d7

@end

