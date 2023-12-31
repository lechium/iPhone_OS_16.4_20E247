//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAProgressNotification, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _LTLanguageAssetStatus : NSObject
{
    _Bool _finished;	// 8 = 0x8
    long long _progress;	// 16 = 0x10
    unsigned long long _status;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSArray *_localIdentifiers;	// 40 = 0x28
    MAProgressNotification *_update;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001877a
@property(retain, nonatomic) MAProgressNotification *update; // @synthesize update=_update;
@property(retain, nonatomic) NSArray *localIdentifiers; // @synthesize localIdentifiers=_localIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (id)description;	// IMP=0x00000000000185e7
- (id)_LTAssetStateString;	// IMP=0x00000000000185c3

@end

