//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC19appstorecomponentsd11JSLocObject : NSObject
{
    MISSING_TYPE *localizer;	// 0 = 0x0
    MISSING_TYPE *locale;	// 0 = 0x0
    MISSING_TYPE *localeWithCalendar;	// 0 = 0x0
    MISSING_TYPE *localeWithCalendarWithBagFixUp;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000082960
- (id)init;	// IMP=0x0010000000082900
- (id)relativeDate:(id)arg1;	// IMP=0x00100000000827f0
- (id)formatDateInSentence:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0010000000082070
- (id)formatDate:(id)arg1:(id)arg2;	// IMP=0x0010000000081cc0
- (id)timeAgo:(id)arg1;	// IMP=0x0010000000081ca0
- (id)formattedCount:(id)arg1;	// IMP=0x00100000000814f0
- (id)fileSize:(id)arg1;	// IMP=0x0010000000081340
- (id)decimal:(id)arg1:(long long)arg2;	// IMP=0x00100000000812b0
- (id)stringWithCounts:(id)arg1:(id)arg2;	// IMP=0x0010000000081040
- (id)stringWithCount:(id)arg1:(long long)arg2;	// IMP=0x0010000000080dc0
- (id)string:(id)arg1;	// IMP=0x0010000000080d30
@property(nonatomic, readonly) NSString *arcadeWordmarkAssetName;
@property(nonatomic, readonly) NSString *identifier;

@end

