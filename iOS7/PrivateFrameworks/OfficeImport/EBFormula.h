/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface EBFormula : NSObject
{
}

+ (struct XlFormulaInfo *)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 edSheet:(id)arg4 state:(id)arg5;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 state:(id)arg3;
+ (void)readFormulaFromXlCell:(struct XlCell *)arg1 edCell:(struct EDCellHeader *)arg2 edRowBlocks:(id)arg3 state:(id)arg4;

@end

