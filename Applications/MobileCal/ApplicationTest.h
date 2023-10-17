//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Application, CalendarModel, NSDictionary;

@interface ApplicationTest : NSObject
{
    _Bool _useLegacyData;	// 8 = 0x8
    Application *_application;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    CalendarModel *_model;	// 32 = 0x20
}

+ (id)testName;	// IMP=0x004000000002f626
- (void).cxx_destruct;	// IMP=0x002000000002ffa1
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) Application *application; // @synthesize application=_application;
- (void)setupData;	// IMP=0x001000000002fc6d
- (id)extractInitialDateOption;	// IMP=0x001000000002f83b
- (void)runTest;	// IMP=0x001000000002f6ff
- (id)initWithApplication:(id)arg1 model:(id)arg2 options:(id)arg3;	// IMP=0x001000000002f638

@end
