//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBAppColor, _SFPBCalendarColor, _SFPBGraphicalFloat;

@protocol _SFPBColor <NSObject>
@property(readonly, nonatomic) unsigned long long whichValue;
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBAppColor *appColor;
@property(retain, nonatomic) _SFPBCalendarColor *calendarColor;
@property(retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *redComponent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

