//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _CPLPrequeliteScopeIsEqual : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0020000000030103
- (void).cxx_destruct;	// IMP=0x0020000000030214
- (id)bindValuesToKeepAlive;	// IMP=0x0010000000030206
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x00100000000301ea
@property(readonly, nonatomic) NSData *sql;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000030166

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

