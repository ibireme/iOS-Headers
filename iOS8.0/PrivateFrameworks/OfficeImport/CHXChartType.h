//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CHXChartType : NSObject
{
}

+ (void)resolveStyle:(id)arg1 state:(id)arg2;
+ (int)chdShapeTypeFromXmlShapeTypeElement:(struct _xmlNode *)arg1;
+ (id)stringWithGroupingEnum:(int)arg1;
+ (int)chdGroupingFromXmlGroupingElement:(struct _xmlNode *)arg1;
+ (id)chdChartTypeFromXmlChartTypeElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)prepareChartTypeForWriting:(id)arg1;
+ (Class)chxChartTypeClassWithXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end

